class tnode {
public:
    tnode* child[26];
    bool isend;
    int cnt;
    tnode() {
        for (int i = 0; i < 26; i++) child[i] = NULL;
        isend = false;
        cnt = 0;
    }
};

class Solution {
public:
    void check(string* arr, int n) {
        tnode* root = new tnode();

        for (int i = 0; i < n; i++) {
            string& s = arr[i];
            tnode* t = root;
            string res = "";
            bool flag = true;

            for (int j = 0; j < (int)s.size(); j++) {
                int idx = s[j] - 'a';
                if (t->child[idx] == NULL) {
                    t->child[idx] = new tnode();
                }
                t = t->child[idx];

                if (flag) res += s[j];
                if (t->cnt == 0) flag = false;
                t->cnt++;
            }

            if (flag && t->isend) {
                cout << s << " " << t->cnt << "\n";
            } else {
                cout << res << "\n";
            }
            t->isend = true;
        }
    }
};
