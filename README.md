# CP<br>

CP stuff : books,contest programs,etc.<br>
Erricto:-<br>
https://github.com/Errichto/youtube/wiki/FAQ <br>
https://cses.fi/problemset/ <br>
Precompile bits/stdc++.h <br>
https://www.youtube.com/watch?v=ynHKYjBpzBw&list=WL&index=57 <br>
Windows: C:\cygwin64\lib\gcc\x86_64-w64-mingw32\10\include\c++\x86_64-w64-mingw32\bits <br>
Linux: <br>
g++ -std=c++17 stdc++.h <br>
C:\Users\samir\AppData\Roaming\Sublime Text 3\Packages\User <br>
<br>
#ifndef​ ONLINE_JUDGE <br>
freopen("input.txt", "r", stdin); <br>
freopen("output.txt", "w", stdout); <br>
freopen("error.txt", "w", stderr); <br>
#endif <br>
<br>
ios_base::sync_with_stdio(false); <br>
cin.tie(nullptr); <br>

    cout<<"?"<<mid+1<<"\n"; <br>
    cout.flush(); <br>
    cin >>z; <br>

 <br>
(optional-hardcode) <br>
   <br>
{ <br>
"cmd": ["g++.exe", <br>
 "-std=c++17", "${file}",  <br>
  "-o", <br>
   "${file_base_name}.exe", <br>
    "&&" , <br>
     "${file_base_name}.exe<Input.txt>Output.txt"], <br>
"shell":true, <br>
"working_dir":"$file_path", <br>
"selector":"source.cpp" <br>
}

(general cpp.build-system) <br>
{ <br>
"cmd": ["g++.exe", <br>
"-std=c++17", "${file}", <br>
"-o", <br>
"${file_base_name}.exe", <br>
"&&" , <br>
"${file_base_name}.exe"], <br>
"shell":true, <br>
"working_dir":"$file_path", <br>
"selector":"source.cpp" <br>
} <br>

PATH: C:\cygwin64\bin <br>
