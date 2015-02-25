var assert = require('chai').assert;
var data = require('../data.js');

decribe('Main', function(){
	describe('Create Post', function{
		it('Should return 0 for a post not created', function({
			assert.equal(data.createpost(),0);
		})
	})
	describe('Show Post', function{
		it('getallpost() Should be a object', function{
			assert.isobject(data.getallpost());
		})
		it('getpostbyname() Should be a object', function{
			assert.isobject(data.getpostbyname());
		})
		it('getpostbytag() Should be a object', function{
			assert.isobject(data.getpostbytag());
		})
		it('getpostbydate() Should be a object', function{
			assert.isobject(data.getpostbydate());
		})		
	})
	describe('')	
})
