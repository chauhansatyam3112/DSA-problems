//      vector<int> mask(words.size());
// vector<int> lens(words.size());
// for(int i = 0; i < words.size(); ++i) lens[i] = words[i].length();
// int result = 0;
// for (int i=0; i<words.size(); ++i) {
//     for (char c : words[i])
//         mask[i] |= 1 << (c - 'a');
//     for (int j=0; j<i; ++j)
//         if (!(mask[i] & mask[j]))
//             result = max(result, lens[i]*lens[j]);
// }
// return result;