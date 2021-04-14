import java.io.*;
import java.util.*;

public class Main {
    
    static Pair<Integer, Integer>[] a;

    static ArrayList<Integer> findMaximal (int l, int r) {
        if (l == r) {
            ArrayList<Integer> answer = new ArrayList<Integer>();
            answer.add(l);
            return answer;
        }
        int m = l + (r - l) / 2;
        ArrayList<Integer> lMaximal = findMaximal(l, m);
        ArrayList<Integer> rMaximal = findMaximal(m + 1, r);
        int maxY = 0;
        for (int i : rMaximal) {
            maxY = Math.max(maxY, a[i].second);
        }
        for (int i : lMaximal) {
            if (a[i].second > maxY) {
                rMaximal.add(i);
            }
        }
        return rMaximal;
    }

    public static void main(String[] args) throws IOException {
        Scanner scan = new Scanner(System.in);
        OutputWriter out = new OutputWriter(System.out);

        int n = scan.nextInt();
        int q = scan.nextInt();

        a = new Pair[n];

        for (int i = 0; i < n; ++i) {
            int x = scan.nextInt();
            int y = scan.nextInt();
            a[i] = new Pair<Integer, Integer>(x, y);
        }

        Arrays.sort(a);

        ArrayList<Integer> maximal = findMaximal(0, n - 1);

        while (q-- > 0) {
            int x = scan.nextInt();
            int y = scan.nextInt();
            int l = 0, r = (int) maximal.size() - 1, i = -1;
            while (l <= r) {
                int m = l + (r - l) / 2;
                if (a[maximal.get(m)].second >= y) {
                    i = m;
                    r = m - 1;
                } else {
                    l = m + 1;
                }
            }
            if (i == -1 || a[maximal.get(i)].first < x) {
                out.print(-1 + "\n");
            } else {
                out.print(a[maximal.get(i)].first + " " + a[maximal.get(i)].second + "\n");
            }
        }

        out.close();
        return;
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

    static class Pair<U, V> implements Comparable<Pair<U, V>> {
        public final U first;
        public final V second;

        public static <U, V> Pair<U, V> makePair(U first, V second) {
            return new Pair<U, V>(first, second);
        }

        private Pair(U first, V second) {
            this.first = first;
            this.second = second;
        }

        @Override
        public boolean equals(Object o) {
            if (this == o) {
                return true;
            }
            if (o == null || getClass() != o.getClass()) {
                return false;
            }

            Pair pair = (Pair) o;

            return !(first != null ? !first.equals(pair.first) : pair.first != null)
                && !(second != null ? !second.equals(pair.second) : pair.second != null);
        }

        @Override
        public int hashCode() {
            int result = first != null ? first.hashCode() : 0;
            result = 31 * result + (second != null ? second.hashCode() : 0);
            return result;
        }

        public Pair<V, U> swap() {
            return makePair(second, first);
        }

        @Override
        public String toString() {
            return "(" + first + "," + second + ")";
        }

        @SuppressWarnings({"unchecked"})
        public int compareTo(Pair<U, V> o) {
            int value = ((Comparable<U>) first).compareTo(o.first);
            if (value != 0) {
                return value;
            }
            return ((Comparable<V>) second).compareTo(o.second);
        }
    }
}
