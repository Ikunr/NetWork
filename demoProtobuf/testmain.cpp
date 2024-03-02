#include <iostream>
#include "testproto.pb.h"  // 假设你的testproto.proto已经生成了对应的头文件testproto.pb.h

int main() 
{
    SearchResponse searchResponse;

    // 填充searchResponse对象的内容
    SearchResponse::Result* result1 = searchResponse.add_results();
    
    result1->set_url("http://www.example.com");
    result1->set_title("Example Website");
    result1->add_snippets("This is a snippet about the example website.");

    SearchResponse::Result* result2 = searchResponse.add_results();
    result2->set_url("http://www.anotherexample.com");
    result2->set_title("Another Example Website");
    result2->add_snippets("Snippet for another example website.");

    // 对SearchResponse对象进行序列化
    std::string serializedData;
    if (!searchResponse.SerializeToString(&serializedData)) 
    {
        std::cerr << "Failed to serialize search response." << std::endl;
        return 1;
    }

    // 直接打印序列化后的数据
    std::cout << "Serialized SearchResponse:" << serializedData <<std::endl;

    // 反序列化操作
    SearchResponse deserializedSearchResponse;
    if (!deserializedSearchResponse.ParseFromString(serializedData)) 
    {
        std::cerr << "Failed to parse search response." << std::endl;
        return 1;
    }

    // 输出反序列化后的对象内容
    for (const auto & result : deserializedSearchResponse.results()) 
    {
        std::cout << "URL: " << result.url() << std::endl;
        std::cout << "Title: " << result.title() << std::endl;
        std::cout << "Snippets:" << std::endl;
        for (const auto& snippet : result.snippets()) 
        {
            std::cout << "- " << snippet << std::endl;
        }
    }

    return 0;
}