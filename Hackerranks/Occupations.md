
``` sql
set @s1=0, @s2=0, @s3=0, @s4=0;
select min(Doctor), min(Professor), min(Singer), min(Actor)
from(
    select
        case when Occupation='Doctor' then (@s1:=@s1+1)
            when Occupation='Professor' then (@s2:=@s2+1)
            when Occupation='Singer' then (@s3:=@s3+1)
            when Occupation='Actor' then (@s4:=@s4+1) end as RowNums,
        case when Occupation='Doctor' then Name end as Doctor,
        case when Occupation='Professor' then Name end as Professor,
        case when Occupation='Singer' then Name end as Singer,
        case when Occupation='Actor' then Name end as Actor
    from OCCUPATIONS
    order by Name
) as temp
group by RowNums;
```

<img width="518" alt="image" src="https://user-images.githubusercontent.com/50198431/181025782-52cd727a-9272-4608-be07-7473d4b74b2d.png">
