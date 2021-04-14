import java.io.*;
import java.util.Arrays;
import java.util.StringTokenizer;

public class Main {
    static long gcd(long a, long b) {
        if (a == 0)
            return b;
        return gcd(b % a, a);
    }

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        OutputWriter out = new OutputWriter(System.out);

        int q = scan.nextInt();

        while (q-- > 0) {
            long a = scan.nextLong();
            long b = scan.nextLong();
            long x = scan.nextLong();
            if (a == 0 && b == 0) {
                if (x == 0) {
                    out.print(1 + "\n");
                } else {
                    out.print(0 + "\n");
                }
                continue;
            }
            long g = gcd(a, b);
            if (x % 2 == 0 && (x / 2) % g == 0) {
                out.print(1 + "\n");
                continue;
            }
            x -= a + b;
            if (x % 2 == 0 && (x / 2) % g == 0) {
                out.print(1 + "\n");
                continue;
            }
            out.print(0 + "\n");
        }

        out.close();
    }

    // fast input
    static class Scanner {
        public BufferedReader reader;
        public StringTokenizer tokenizer;

        public Scanner(InputStream stream) {
            reader = new BufferedReader(new InputStreamReader(stream));
            tokenizer = null;
        }

        public String next() {
            while (tokenizer == null || !tokenizer.hasMoreTokens()) {
                try {
                    String line = reader.readLine();
                    if (line == null)
                        return null;
                    tokenizer = new StringTokenizer(line);
                } catch (Exception e) {
                    throw(new RuntimeException());
                }
            }
            return tokenizer.nextToken();
        }

        public int nextInt() {
            return Integer.parseInt(next());
        }
        public long nextLong() {
            return Long.parseLong(next());
        }
        public double nextDouble() {
            return Double.parseDouble(next());
        }
    }

    // fast output
    static class OutputWriter {
        BufferedWriter writer;

        public OutputWriter(OutputStream stream) {
            writer = new BufferedWriter(new OutputStreamWriter(stream));
        }

        public void print(int i) throws IOException {
            writer.write(i);
        }
        public void print(String s) throws IOException {
            writer.write(s);
        }
        public void print(char[] c) throws IOException {
            writer.write(c);
        }
        public void close() throws IOException {
            writer.close();
        }
    }
}
