function myFunction() {
        var input = document.getElementById("myText").value ;
        document.write(input);
        var count=0;
        var start =0;
        var end =0;

        start = new Date().getTime();
        perm('', input);
        function perm(prefix, str) {
            if (str == '') {
                console.log(prefix);
                document.write("<br>");
                document.write(prefix);
                count++;
            } 
            else {
                for (var i = 0; i < str.length; i++) {
                    perm(prefix + str[i], str.substr(0,i) + str.substr(i+1,str.length-1));
                }
            }  
        }
            console.log(count);
            document.write("<br>");
            document.write("Numbers of Permutation: " + count);
            end = new Date().getTime();
            document.write("<br>");
            console.log("Total Execution Time:"+(end-start)+"ms");
            document.write("Total Execution Time:"+(end-start)+"ms");
        }