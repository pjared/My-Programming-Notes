# Sail

Site: https://laravel.com/docs/9.x/sail#
- [Sail](#sail)
  - [Abstract](#abstract)
  - [Quick Usage](#quick-usage)
  - [Configuration](#configuration)
  - [To use Sail](#to-use-sail)


## Abstract
Sail acts as a command-line environment to interact with laravel's [docker] file.

## Quick Usage
| Command | Description |
| ----------- | ----------- |
| php artisan sail:install --devcontainer | Install a dev container (to use in VSCode) |
| ./vendor/bin/sail up | Start Sail |
| ./vendor/bin/sail stop | Stop Sail |
| ./vendor/bin/sail build | Rebuild container image |

## Configuration
If Sail is not installed, install with

`composer require laravel/sail --dev`

Install a development container (to use with VSCode)

`php artisan sail:install --devcontainer`

Set a bash alias so you don't have to type the full sail directory

`alias sail='[ -f sail ] && bash sail || bash vendor/bin/sail'`

## To use Sail
- Make sure that no other web servers or databases are running on sail
- Instead of using `php artisan` use `sail artisan`