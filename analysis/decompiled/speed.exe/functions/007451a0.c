/* speed.exe 007451a0 FUN_007451a0; analysis pseudocode, not buildable source.
 * calls 007267a0 FUN_007267a0
 * calls 0072d510 FUN_0072d510
 */

void FUN_007451a0(void)

{
  undefined4 *puVar1;
  
  for (puVar1 = DAT_009b3520; (undefined4 **)puVar1 != &DAT_009b3520; puVar1 = (undefined4 *)*puVar1
      ) {
    FUN_007267a0();
  }
  FUN_0072d510();
  return;
}

