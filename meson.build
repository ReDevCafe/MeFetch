project('mefetch', 'c')

# Run a Python script to find all .c files dynamically
glob = run_command('python3', 'find_sources.py')
sources = glob.stdout().strip().split('\n')

# Compiler flags
cflags = ['-Wall', '-Wextra', '-Werror']  # Add any additional compiler flags you need

# Define dependencies
dependencies = [ dependency('sdl2'), dependency('SDL2_image') ]

# Build the executable
executable('mefetch',
           sources,
           dependencies: dependencies,
            c_args: cflags
)