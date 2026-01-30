SELECT score,
Dense_Rank()
OVER(
    ORDER BY score DESC 
)AS 'rank'
FROM Scores