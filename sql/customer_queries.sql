-- Topic: SQL - Basic to Intermediate Queries
-- Description: A collection of SQL queries practicing SELECT, WHERE, LIKE,
--              AND/OR, aggregate functions, GROUP BY, JOIN, and subqueries
--              using a customer and invoice database.
-- Course: Database Management Systems

-- ============================================================
-- 1. List the phone number and last name of all customers
-- ============================================================
SELECT telefon, soyadi
FROM Musica_Musteri;

-- ============================================================
-- 2. List the phone, last name and first name of the customer
--    whose first name is 'Nikki'
-- ============================================================
SELECT telefon, soyadi, adi
FROM Musica_Musteri
WHERE adi = 'Nikki';

-- ============================================================
-- 3. List the phone, invoice date, payment date and total
--    of all invoices with a total of $100 or more
-- ============================================================
SELECT telefon, Fatura_tarihi, odeme_tarihi, tutar
FROM Musica_Fatura
WHERE tutar >= 100;

-- ============================================================
-- 4. List the phone, last name and first name of all customers
--    whose last name starts with 'B'
-- ============================================================
SELECT telefon, soyadi, adi
FROM Musica_Musteri
WHERE soyadi LIKE 'B%';

-- ============================================================
-- 5. List the phone, last name and first name of customers
--    whose last name contains 'C', 'A', or 'I'
-- ============================================================
SELECT telefon, soyadi, adi
FROM Musica_Musteri
WHERE soyadi LIKE '%C%' AND soyadi LIKE '%A%' AND soyadi LIKE '%N%';

-- ============================================================
-- 6. List the phone, first name and last name of customers
--    whose phone number's 2nd and 3rd digits are 23
-- ============================================================
SELECT telefon, soyadi, adi
FROM Musica_Musteri
WHERE telefon LIKE '_23%';

-- ============================================================
-- 7. Find the maximum, minimum and average invoice totals.
--    Label the columns with descriptive names.
-- ============================================================
SELECT
    MAX(tutar) AS Maksimum_Tutar,
    MIN(tutar) AS Minimum_Tutar,
    AVG(tutar) AS Ortalama_Tutar
FROM Musica_Fatura;

-- ============================================================
-- 8. Find the total number of customers
-- ============================================================
SELECT COUNT(*) AS Musteri_Sayisi
FROM Musica_Musteri;

-- ============================================================
-- 9. Group customers by last name, find how many customers
--    are in each group. List last name and count as columns.
-- ============================================================
SELECT soyadi, COUNT(*) AS Musteri_Sayisi
FROM Musica_Musteri
GROUP BY soyadi;

-- ============================================================
-- 10. List the first and last name of customers who have
--     invoices over $100, sorted by last name descending,
--     then first name ascending for duplicates
-- ============================================================
SELECT DISTINCT adi, soyadi
FROM Musica_Musteri a
WHERE EXISTS (
    SELECT adres FROM Musica_Fatura
    WHERE total > 100
)
ORDER BY soyadi ASC, adi DESC;

-- ============================================================
-- 11. List first and last name of customers who bought
--     'Dress Shirt' using JOIN, sorted by last name descending,
--     then first name ascending for duplicates
-- ============================================================
SELECT DISTINCT m.adi, m.soyadi
FROM Musica_Musteri m
JOIN Musica_Fatura f ON m.adres = f.adres
JOIN Musica_Fatura_Detay d ON f.fatura_id = d.fatura_id
WHERE d.urun_adi = 'Dress Shirt'
ORDER BY m.soyadi ASC, m.adi DESC;

-- ============================================================
-- 12. List the phone, first name, invoice total and number of
--     items for customers who bought more than one item
--     in a single invoice
-- ============================================================
SELECT m.telefon, m.adi, f.tutar, COUNT(d.parce_adi) AS parce_adedi
FROM Musica_Musteri m
JOIN Musica_Fatura f ON m.adres = f.adres
JOIN Musica_Fatura_Detay d ON f.fatura_id = d.fatura_id
GROUP BY m.telefon, m.adi, f.tutar
HAVING COUNT(d.parce_adi) > 1;
