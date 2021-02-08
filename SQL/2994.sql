SELECT
  doctors.name,
  round(
    sum(
      (attendances.hours * 150.0) + (
        ((attendances.hours * 150.0) * work_shifts.bonus) / 100.0
      )
    ),
    1
  ) AS salary
FROM
  doctors
  INNER JOIN attendances ON attendances.id_doctor = doctors.id
  INNER JOIN work_shifts ON attendances.id_work_shift = work_shifts.id
GROUP BY
  doctors.name
ORDER BY
  salary DESC