# Description
IntMap data structure for sourcemod.

# IntMap
```
IntMap()
bool SetValue(int key, any value, bool replace = true)
bool SetArray(int key, const any[] array, int num_items, bool replace = true)
bool SetString(int key, const char[] value, bool replace = true)
bool GetValue(int key, any& value)
bool GetArray(int key, any[] array, int max_size, int& size = 0)
bool GetString(int key, char[] value, int max_size, int& size = 0)
bool Remove(int key)
void Clear()
IntMapSnapshot Snapshot()
int Size
```

# IntMapSnapshot
```
IntMapSnapshot()
int GetKey(int index)
int Length
```
