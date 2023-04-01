#include <bits/stdc++.h>
using namespace std;

/*
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

"(){}[]"  -> true
"(())[()]"-> true
"((())}"  -> false
"[[]]("   -> false
*/

bool isValid(string s)
{
  stack<char> st;

  // complete the code : )

  for (char c : s)
  {
    if (c == '(' || c == '{' || c == '[')
    {
      st.push(c);
    }
    else
    {
      if (st.empty())
      {
        return false;
      }
      char top = st.top();
      st.pop();
      if ((c == ')' && top != '(') || (c == '}' && top != '{') || (c == ']' && top != '['))
      {
        return false;
      }
    }
  }

  return st.empty();
}

int main()
{
  string s;
  cin >> s;
  if (isValid(s))
  {
    cout << "Valid"
         << "\n";
  }
  else
  {
    cout << "Not Valid"
         << "\n";
  }

  return 0;
}

/*
1 <= s.length <= 1e4
s consists of parentheses only '()[]{}'.

*/
