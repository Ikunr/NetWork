#include <stdio.h>
#include <json-c/json.h>
#include <json-c/json_object.h>




int main()
{
    /* 新建json对象 */
    struct json_object * jsonObj = json_object_new_object();

    struct json_object * value = json_object_new_int64(32);

    const char * key = "age";

    json_object_object_add(jsonObj, key, value);

    /* 将json转换成字符串 */
    const char * str = json_object_to_json_string(jsonObj);

    printf("str:%s\n", str);



    /* 将字符串转化成json对象 */
#if 0
    // struct json_object * ageObj = json_object_new_string(str);
#else
    struct json_object * ageObj = json_tokener_parse(str);
#endif

    struct json_object * keyValue = json_object_object_get(ageObj, key);
    if (keyValue == NULL)
    {
        printf("fergregrt\n");
    }

    int64_t val = json_object_get_int64(keyValue);
    printf("value:%ld\n", val);


    return 0;
}