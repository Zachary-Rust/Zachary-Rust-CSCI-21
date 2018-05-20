#include "tree.h"

bool Tree::LoadWords(string file)
{
    ifstream inFS;
    
    inFS.open(file.c_str());
    
    if (!inFS.is_open())
    {
        return false;
    }
    
    int word_count = 0;
    
    int weight = 0;
    string word = "";
    string temp = "";
    
    getline(inFS, temp);
    
    stringstream ss;
    ss << temp;
    ss >> word_count;
    ss.clear();
    
    for (int i = 0; i < word_count; i++)
    {
        //Load whole line
        getline(inFS, word);
        
        //Extract numbers from line, leaving just the city
        bool separate = false;
        stringstream num;
        stringstream wor;
        
        for (int i = 0; i < word.length(); i++)
        {
            if (!separate)
            {
                if (isalnum(word.at(i)) || isalpha(word.at(i)))
                {
                    num << word.at(i);
                }
                else
                {
                    separate = true;
                }
            }
            else
            {
                if (word.at(i) != ' ')
                {
                    wor << word.at(i);
                }
            }
            
        }
        
        //cout << "NUM " << weight << endl;
        num >> weight;
        word = "";
        wor >> word;
        
        //Add Node to tree
        Insert(word, weight);
        
        num.clear();
        wor.clear();
        
    }
}

int Tree::Size()
{
    return size_;
}

void Tree::InOrder(Node *node)
{
    if (node->GetLeft() != NULL)
    {
        InOrder(node->GetLeft());
    }
    
    cout << node->GetWeight() << "    " << node->GetWord() << endl;
    
    if (node->GetRight() != NULL)
    {
        InOrder(node->GetRight());
    }
}

void Tree::Insert(string word, int weight)
{
    if (root_ == NULL)
    {
        Node *temp = new Node;
        temp->SetWord(word);
        temp->SetWeight(weight);
        root_ = temp;
        size_++;
    }
    else
    {
        Insert(root_, word, weight);
        size_++;
    }
}

void Tree::Insert(Node *node, string word, int weight)
{
    if (weight <= node->GetWeight())
    {
        if (node->GetLeft() == NULL)
        {
            Node *temp = new Node;
            temp->SetWord(word);
            temp->SetWeight(weight);
            node->SetLeft(temp);
        }
        else
        {
            Insert(node->GetLeft(), word, weight);
        }
    }
    else
    {
        if (node->GetRight() == NULL)
        {
            Node *temp = new Node;
            temp->SetWord(word);
            temp->SetWeight(weight);
            node->SetRight(temp);
        }
        else
        {
            Insert(node->GetRight(), word, weight);
        }
    }
}

int Tree::WordWeight(string key)
{
    return WordWeight(root_, key);
}

int Tree::WordWeight(Node *node, string key)
{
    if (node->GetWord() == key)
    {
        return node->GetWeight();
    }
    
    if (node->GetLeft() != NULL)
    {
        WordWeight(node->GetLeft(), key);
    }
    
    if (node->GetRight() != NULL)
    {
        WordWeight(node->GetRight(), key);
    }
}

string Tree::AutoComplete(Node *node,string prefix, string result)
{
    if(node->GetRight() != NULL)
    {
        result = AutoComplete(node->GetRight(), prefix, result);
    }
    
    stringstream ss;
    
    if(node->GetWord().size() >= prefix.size())
    {
        if (prefix == node->GetWord().substr(0, prefix.size()))
        {
            ss << node->GetWord();
            string temp = "";
            ss >> temp;
            result += temp;
            result += "\n";
        }
        else if(node->GetWord().substr(0, prefix.size()) == prefix.substr(0, node->GetWord().size()))
        {
            ss << node->GetWord();
            string temp = "";
            ss >> temp;
            result += temp;
            result += "\n";
        }
    }
    
    if (node->GetLeft() != NULL)
    {
        result = AutoComplete(node->GetLeft(), prefix, result);
    }
    
    return result;
}

string Tree::AutoComplete(string prefix)
{
    string word = "";
    return AutoComplete(root_, prefix, word);
}

void Tree::Clear()
{
    if (root_ == NULL)
    {
        size_ = 0;
        return;
    }
    else
    {
        Clear(root_);
        root_ = NULL;
    }
    
    size_ = 0;
}

void Tree::Clear(Node *node)
{
    if (node->GetLeft() != NULL)
    {
        Clear(node->GetLeft());
    }
    
    if (node->GetRight() != NULL)
    {
        Clear(node->GetRight());
    }
    
    delete node;
}

Node* Tree::GetRoot()
{
    return root_;
}