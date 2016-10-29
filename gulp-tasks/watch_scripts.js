'use strict';

module.exports = function (gulp, plugins, options) {
  return function () {
    var stream = gulp.watch([
                        options.bahstun + '/src/js/*.js',
                        options.bahstun + '/src/vendor-js/*.js',
                        options.scripts_vendor + '/*.js',
                        options.scripts + '/*.js'
                      ], ['lint:js', 'scripts']);

    return stream;
  };
};
