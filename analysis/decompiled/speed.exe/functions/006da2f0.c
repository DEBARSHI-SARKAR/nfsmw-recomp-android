/* speed.exe 006da2f0 FUN_006da2f0; analysis pseudocode, not buildable source.
 * calls 006c1010 FUN_006c1010
 */

void FUN_006da2f0(void)

{
  DAT_009877cc = 0;
  if ((DAT_0093cb18 != '\0') && (DAT_0093caf4 != (int *)0x0)) {
    (**(code **)(*DAT_0093caf4 + 0x30))(DAT_0093caf4);
    DAT_0093cb18 = '\0';
  }
  FUN_006c1010();
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x108))(*(int **)(DAT_00982c80 + 0x48));
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc,0xe,1);
  return;
}

