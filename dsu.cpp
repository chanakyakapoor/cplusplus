class Disjointset
{
private:
    vector<int> parent, size; 
public:
    Disjointset(int n)
    {
        parent.resize(n + 1);
        size.resize(n, 1);
        for (int i = 0; i < n + 1; i++)
        {
            parent[i] = i; 
        }
    }
    int find(int X)
    {
        if (parent[X] == X)
            return X;

        return parent[X] = find(parent[X]); 
    }
    void UNION(int X, int Y)
    {
        int parent1 = find(X);
        int parent2 = find(Y);
        if (parent1 == parent2)
            return;
        if (size[parent1] < size[parent2])
        {
            parent[parent1] = parent2;
            size[parent2] += size[parent1];
        }
        else
        {
            parent[parent2] = parent1;
            size[parent1] += size[parent2];
        }
    }
    void printArrays()
    {
        cout << "PARENT" << endl;
        for (auto it : parent)
        {
            cout << it << " ";
        }
        cout << endl;
        cout << "SIZE" << endl;
        for (auto it : size)
        {
            cout << it << " ";
        }
    }
    int SIZE(int vertex)
    {
        return size[find(vertex)]; 
    }

    int noOfdisjointSets(int n) 
    {

        for (int i = 0; i < n; i++)
        {
            parent[i] = find(i);
        }

        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (parent[i] == i)
            {
                cnt++;
            }
        }
        return cnt;
    }
};


//call
Disjointset ds(n * n);