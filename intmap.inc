methodmap IntMapSnapshot < Handle
{
	public IntMapSnapshot()
	{
		return view_as<IntMapSnapshot>(new StringMapSnapshot());
	}
	
	public int GetKey(int index)
	{
		char buffer[255];
		view_as<StringMapSnapshot>(this).GetKey(index, buffer, sizeof(buffer));
		return StringToInt(buffer);
	}
	
	property int Length
	{
		public get()
		{
			return view_as<StringMapSnapshot>(this).Length;
		}
	}
}

methodmap IntMap < Handle
{
	public IntMap()
	{
		return view_as<IntMap>(new StringMap());
	}
	
	public bool SetValue(int key, any value, bool replace = true)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).SetValue(buffer, value, replace);
	}
	
	public bool SetArray(int key, const any[] array, int num_items, bool replace = true)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).SetArray(buffer, array, num_items, replace);
	}
	
	public bool SetString(int key, const char[] value, bool replace = true)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).SetString(buffer, value, replace);
	}
	
	public bool GetValue(int key, any& value)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).GetValue(buffer, value);
	}
	
	public bool GetArray(int key, any[] array, int max_size, int& size = 0)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).GetArray(buffer, array, max_size, size);
	}
	
	public bool GetString(int key, char[] value, int max_size, int& size = 0)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).GetString(buffer, value, max_size, size);
	}
	
	public bool Remove(int key)
	{
		char buffer[255];
		IntToString(key, buffer, sizeof(buffer));
		return view_as<StringMap>(this).Remove(buffer);
	}
	
	public void Clear()
	{
		view_as<StringMap>(this).Clear();
	}
	
	public IntMapSnapshot Snapshot()
	{
		return view_as<IntMapSnapshot>(view_as<StringMap>(this).Snapshot());
	}
	
	property int Size
	{
		public get()
		{
			return view_as<StringMap>(this).Size;
		}
	}
}