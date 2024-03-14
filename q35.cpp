#include <iostream>
#include <stack>
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

double evaluateExpression(const string& expression) {
    stack<double> values;
    stack<char> operators;

    istringstream iss(expression);
    string token;

    while (iss >> token) {
        if (isdigit(token[0])) {
            values.push(stod(token));
        } else if (token == "(") {
            operators.push('(');
        } else if (token == ")") {
            while (operators.top() != '(') {
                char op = operators.top(); operators.pop();
                double val2 = values.top(); values.pop();
                double val1 = values.top(); values.pop();
                if (op == '+') values.push(val1 + val2);
                else if (op == '-') values.push(val1 - val2);
                else if (op == '*') values.push(val1 * val2);
                else if (op == '/') values.push(val1 / val2);
            }
            operators.pop(); // Pop '('
        } else {
            while (!operators.empty() && operators.top() != '(' && 
                   ((token == "*" || token == "/") || 
                   (operators.top() == '+' || operators.top() == '-'))) {
                char op = operators.top(); operators.pop();
                double val2 = values.top(); values.pop();
                double val1 = values.top(); values.pop();
                if (op == '+') values.push(val1 + val2);
                else if (op == '-') values.push(val1 - val2);
                else if (op == '*') values.push(val1 * val2);
                else if (op == '/') values.push(val1 / val2);
            }
            operators.push(token[0]);
        }
    }

    while (!operators.empty()) {
        char op = operators.top(); operators.pop();
        double val2 = values.top(); values.pop();
        double val1 = values.top(); values.pop();
        if (op == '+') values.push(val1 + val2);
        else if (op == '-') values.push(val1 - val2);
        else if (op == '*') values.push(val1 * val2);
        else if (op == '/') values.push(val1 / val2);
    }

    return values.top();
}

int main() {
    string expression;
    cout << "Enter a mathematical expression: ";
    getline(cin, expression);

    double result = evaluateExpression(expression);
    cout << "Result: " << result << endl;

    return 0;
}

