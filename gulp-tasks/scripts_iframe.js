'use strict';

module.exports = function (gulp, plugins, options) {
  let paths = [
    options.bahstun + '/src/vendor-js/iframe/*.js',
    options.scripts_vendor + '/iframe/*.js'
  ]

  return function () {
    var stream = gulp.src(paths)
      .pipe(gulp.dest(options.dest + '/js'));

    return stream;
  };
};
