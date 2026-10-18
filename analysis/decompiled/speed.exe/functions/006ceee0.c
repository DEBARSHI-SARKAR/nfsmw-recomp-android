/* speed.exe 006ceee0 FUN_006ceee0; analysis pseudocode, not buildable source.
 * calls 006c6cc0 FUN_006c6cc0
 * calls 006c0f80 FUN_006c0f80
 * calls 006c8000 FUN_006c8000
 */

undefined4 FUN_006ceee0(void)

{
  int iStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0;
  iStack_8 = 0xe;
  (**(code **)(*DAT_00982bdc + 0xe4))(DAT_00982bdc);
  DAT_009877cc = 1;
  FUN_006c8000(&DAT_00987ab0,*(undefined4 *)(iStack_8 + 4));
  FUN_006c6cc0(uStack_4,0);
  FUN_006c0f80(&iStack_8);
  (**(code **)(**(int **)(DAT_00982c80 + 0x48) + 0x100))(*(int **)(DAT_00982c80 + 0x48),0);
  return 1;
}

