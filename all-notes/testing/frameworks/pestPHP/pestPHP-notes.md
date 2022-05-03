- [Pest PHP](#pest-php)
  - [How to Write Tests](#how-to-write-tests)
    - [Higher Order Syntax](#higher-order-syntax)
  - [Testing Functions](#testing-functions)
    - [Setup & Teardown](#setup--teardown)
    - [Exception Handling](#exception-handling)
    - [Labeling Tests](#labeling-tests)
    - [Skipping tests](#skipping-tests)
    - [Assertions](#assertions)
    - [Expectations](#expectations)

# Pest PHP

Site: https://pestphp.com/docs/installation

## How to Write Tests

Pest uses it() or test(). An example goes as following
```
test('has home', function () {
    // ..
});
Output: asserts true is true

// or
it('has home', function () {
    // ..
});
Output: it asserts true is true
```
These are provided for naming convention, and the main difference is in their output

### Higher Order Syntax
[Explanation link](https://pestphp.com/docs/higher-order-tests#overview)

Instead of using the normal syntax of `test()` and `it()` you can chain tests. An example:

```
it('points to the correct URL')
    ->expect(fn() => route('dashboard'))
    ->toBe('http://example.com/dashboard');
```

## Testing Functions

### Setup & Teardown

Setting up and tearing down prepare a test to run with the same conditions. The functions are written as following:

`beforeEach(function () {
    echo 'beforeEach';
}); `

- beforeEach()
- afterEach()
- beforeAll()
- afterAll()

You can reuse functions from other with `uses()`. An example:

` uses()->beforeEach(fn () => $this->actingAs(User::first()))->in('Feature/Dashboard'); `

### Exception Handling
Catch exceptions with `throws()` or `throw new Exception();`

### Labeling Tests

Label tests with `group('name');`

### Skipping tests

Skip tests with `skip();`

### Assertions
- assertTrue()
- assertFalse()
- assertCount()
- assertEquals()
- assertEmpty()
- assertStringContainsString()

### Expectations
Expectations adds a better readability to testing. It uses the following syntax:

` expect(true)-><expectation method>()`

Methods: [Full List](https://pestphp.com/docs/expectations#available-expectations)
- toBe()
- toBeArray()
- toBeEmpty()
- toBeTrue()
- toBeFalse()
- toBeGreaterThan()
- toHaveCount()
- toHaveProperty()
- toHaveProperties()
- toMatchArray()
- toMatchObject()
- toEqual()
- toBeIn()
- toBeBool()
- toBeNumeric()
- toBeString()
- toBeJson()
- toBeNull()
- toThrow()
- toEndWith()
- toMatch()
- json()
- sequence()
- unless()
- when()


| Method | Description | Example
| ----------- | ----------- | ----------- |
| assertTrue() | assert something is true | assertTrue(true)
| assertFalse() | assert something is false | assertFalse(true)