//https://www.codingninjas.com/codestudio/problems/longest-common-prefix_2090383

#include<bits/stdc++.h>
using namespace std;

// Using Trie
//Time Complexity = O(N*M)
//Space Complexity = O(N*M)

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        int childCount;
        bool isTerminal;

        TrieNode(char ch){
            data = ch;
            for(int i=0; i<26; i++){
                children[i] = NULL;
            }
            isTerminal = false;
            childCount = 0;
        }
    
};

class Trie{
    
    public:
        TrieNode* root;
        Trie(char ch){
            root = new TrieNode(ch);
        }

        void insertUtil(TrieNode *root, string word)
        {
            // base case
            if (word.length() == 0){
                root->isTerminal = true;
                return;
            }

            int index = word[0] - 'a';
            TrieNode* child;

            if(root->children[index] != NULL){
                child = root->children[index];
            }
            else{
                child = new TrieNode(word[0]);
                root->childCount++;
                root->children[index] = child;
            }
            return insertUtil(child, word.substr(1));
        }

        void insert(string word){
            insertUtil(root, word);
        }

        void lcp(string word, string &ans){

            for(int i=0; i<word.length(); i++) {
                char ch = word[i];

                if(root->childCount == 1) {
                    ans.push_back(ch);
                    
                    //move forward
                    int index = ch - 'a';
                    root = root -> children[index];
                }
                else
                    break;

                if(root->isTerminal) 
                    break;
            }
        }
};


string longestCommonPrefix(vector<string> &word, int n)
{
    Trie* t = new Trie('\0');

    for(int i=0; i<n; i++){
        t->insert(word[i]);
    }

    string first = word[0];
    string ans = "";

    t->lcp(first, ans);
    return ans;
}

