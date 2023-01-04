#include"gtest/gtest.h"
#include"gmock/gmock.h"
#include "AssetManagerDBService.h"

TEST(Database_filesTest, WhenDBIsConnectedThenCheckDBConnection)
{
    const bool expectedDBConnection =true;

    EXPECT_EQ(expectedDBConnection,AssetManagerDBService::CreateInstance()->IsDBConnected(expectedDBConnection));

}
