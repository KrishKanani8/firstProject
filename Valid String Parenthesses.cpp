#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    stack<char> bracket;

    for(char& c: s){

        switch(c){

        case '(': bracket.push(c);break;
        case '{': bracket.push(c);break;
        case '[': bracket.push(c);break;
        case ')': if(bracket.empty() || bracket.top()!= '(') return false; else bracket.pop(); break;
        case '}': if(bracket.empty() || bracket.top()!= '{') return false; else bracket.pop(); break;
        case ']': if(bracket.empty() || bracket.top()!= '[') return false; else bracket.pop(); break;

        }
    }
    return bracket.empty();
}
int main(){

    string s;
    cout<<"Enter the string: ";
    cin>>s;

    bool valid = check(s);

    if(valid){
        cout<<"Valid String Parenthesses.";
    }else{
        cout<<"Invalid String Parenthesses.";
    }

}


/*
        ALTERNATIVE LOGIC
        bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        int i = 0;
        bool flag = true;
        while(i < n)
        {
            // Push any opening brackets into the stack
            if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                st.push(s[i]);
            }
            // Check if the stack is not empty and the top element of the stack is the opening
            // bracket of the current character
            else if(s[i] == ')')
            {
                if(!st.empty() and st.top() == '(')
                {
                    st.pop();
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if(s[i] == '}')
            {
                if(!st.empty() and st.top() == '{')
                {
                    st.pop();
                }
                else
                {
                    flag = false;
                    break;
                }
            }else if(s[i] == ']')
            {
                if(!st.empty() and st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            // Return false if the character is not a bracket
            else
            {
                flag = false;
                break;
            }
            i++;
        }
		// Check if the stack is empty or not
        if(st.size() != 0)
            return false;
        return flag;
    }
*/
