/* speed.exe 00863140 FUN_00863140; analysis pseudocode, not buildable source.
 * calls 0084af40 FUN_0084af40
 * calls 0084af90 FUN_0084af90
 */

void FUN_00863140(void)

{
  int *unaff_ESI;
  
  if (*unaff_ESI != 0) {
    FUN_0084af90(*unaff_ESI,2);
    FUN_0084af40(*unaff_ESI);
  }
  *unaff_ESI = 0;
  return;
}

