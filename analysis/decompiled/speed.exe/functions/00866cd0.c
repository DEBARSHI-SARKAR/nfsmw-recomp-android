/* speed.exe 00866cd0 FUN_00866cd0; analysis pseudocode, not buildable source.
 */

void FUN_00866cd0(undefined4 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = rdtsc();
  *param_1 = (int)((ulonglong)uVar1 >> 0x20);
  param_1[1] = (int)uVar1;
  return;
}

