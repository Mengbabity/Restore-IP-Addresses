# Restore-IP-Addresses

问题：给一串数字字符串，将其分为IP地址格式。

解决。三个for循环分4个字符串。
     分别是s.substr(0,i),(i,j-i),(j,k-j),(k,n-k) 表示从第几位开始，取几个；
     数字转字符串 to_string
     字符串转数字 stoi(str),其中str的大小不能超过32位，并且不能为空；
                 atoi(char*),即atoi(s.c_str())，超过32位显示溢出，可为空
