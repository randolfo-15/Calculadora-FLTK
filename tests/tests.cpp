#include <math.hpp>
#include <form.hpp>
#include <gtest/gtest.h>

 namespace Op=Operate;

//TEST(Operations,Sum){ EXPECT_NEAR(Op::sum("",""),0);  }
//TEST(Operations,Sub){ EXPECT_NEAR(Op::sub(1,1), 0,0);  }
//TEST(Operations,Mul){ EXPECT_NEAR(Op::mut(1,1), 1,0);  }
//TEST(Operations,Div){ EXPECT_NEAR(Op::div(1,2),0.5,0); }

TEST(Operations,Calc){ 
    EXPECT_STREQ(Op::calc("1+1+1+1-1*1/1").c_str(), "3"); 
    EXPECT_STREQ(Op::calc("2*2").c_str(), "4"); 
    EXPECT_STREQ(Op::calc("8/2/2").c_str(), "2"); 
    EXPECT_STREQ(Op::calc("8+2/2").c_str(), "5"); 
}

