'use strict';

module.exports = function (gulp, plugins, options) {
  return function () {
    var stream = gulp.src([
        options.bahstun + '/src/js/*.js',
        options.bahstun + '/src/vendor-js/*.js',
        options.scripts_vendor + '/*.js',
        options.scripts + '/*.js'
      ])
      .pipe(plugins.concat('all.js'))
      .pipe(gulp.dest(options.dest + '/js'))
      .pipe(plugins.rename('all.min.js'))
      .pipe(plugins.uglify())
      .pipe(gulp.dest(options.dest + '/js'));

    return stream;
  };
};
