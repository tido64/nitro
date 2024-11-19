// const path = require('path');
// const pak = require('../package.json');

const { configureProjects } = require("react-native-test-app");

module.exports = {
  dependencies: {
    // [pak.name]: {
    //   root: path.join(__dirname, '..'),
    // },
  },
  project: configureProjects({
    android: {
      sourceDir: "android",
    },
    ios: {
      sourceDir: "ios",
    },
    windows: {
      sourceDir: "windows",
      solutionFile: "windows/NitroExample.sln",
    },
  }),
}
