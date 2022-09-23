https://math-coding.tistory.com/31

#include< unordered_map > 을 선언해야 함.
** unorderd_map ** 
   
   - map : BST 기반 --> 탐색 시간 복잡도는 O(log n)
   - unordered_map : hash-table 기반 ->  탐색 시간복잡도는 O(1)
   즉, unordered_map 은 map보다 더 빠른 탐색을 하기 위한 자료구조입니다..
   - unordered_map은 "중복된 데이터를 허용하지 않고" map에 비해 데이터가 많을 시 월등히 좋은 성능을 보입니다.
     하지만, key가 유사한 데이터가 많을 시 해시 충돌로 인해 성능이 떨어질 수도 있습니다.
     
    (1) empty()  : 맵이 비어있는지 확인하는 함수
                   if unordered_map is empty, then return 1 else 0
    (2) size()   : 맵의 크기를 확인하는 함수
                   return size_type ( unsigned int )
    (3) operator [ ] : 맵에서 key를 통해 value를 지정 또는 얻는 operator
                       map_name[key] = value
                       cout << map_name[key]
    (4) find(key) : 맵에서 key에 해당하는 원소를 찾는 함수
                    if key is contained, then iterator else map_name.end()
                    --> map_name.find(key) == map_name.end() 가 true 이면, key가 없다는 뜻.
    (5) count(key) : 맵에서 key에 해당하는 원소의 갯수를 반환하는 함수
                    if key is contained, return 1 else 0
    (6) insert( {key, value} ) : 맵에 pair<key,value> 를 추가하는 함수
                    if key is contained, then not insert
                    
                    ex) unordered_map<string, int> map;
                        map.insert(make_pair("key",1));  // 1번째
                        map["banana"]=2;                 // 2번째
                        map.insert({"melon",3});         // 3번째 방법.
                       
                    
    (7) erase(key) : 맵에서 key에 해당하는 원소를 제거하는 함수
                     erase 하는 방법 : 특정 position의 pair 삭제, key를 통해 삭제, 범위 삭제
    (8) clear( ) : 맵을 초기화하는 함수

* index로 접근할 수 없고 iterator로 접근하여야 한다.
  시작 : begin( ), 끝 : end( )
  key : iter->first, value : iter->second
  반복문 사용 시 auto 활용 or pair< key_type, value_type > 사용
