// The code in js is also very similar the difference is only for the syntax and rest the logi is same as mention in c++
function firstNonRepeatingCharacter(s) {
  const n = s.length;

  for (let i = 0; i < n; i++) {
    let isRepeating = false;

    for (let j = 0; j < n; j++) {
      if (i !== j && s[i] === s[j]) {
        isRepeating = true;
        break;
      }
    }

    if (!isRepeating) {
      return s[i];
    }
  }

  return null;
}

const myString = ["codingblocks", "abbac", "java", "ccdd"];

myString.forEach((str) => {
  const result = firstNonRepeatingCharacter(str);
  console.log(` ${result}`);
});
