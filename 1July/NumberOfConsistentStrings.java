 int count =0;

for(int i=0;i<words.length;++i)

{

   int j;

   for(j=0;j<words[i].length();j++)

{

   char ch=words[i].charAt(j);

   if(allowed.indexOf(ch)==-1)

break;

}

if(j==words[i].length())

count ++;

}return count;