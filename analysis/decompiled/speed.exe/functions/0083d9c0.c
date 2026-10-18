/* speed.exe 0083d9c0 FUN_0083d9c0; analysis pseudocode, not buildable source.
 * calls 0083d010 FUN_0083d010
 */

void FUN_0083d9c0(int param_1,int param_2)

{
  undefined *puVar1;
  
  if (*(int *)(param_1 + 0x28) == 2) {
    puVar1 = PTR_s__DECL__0090d31c;
    if (param_2 == 1) {
      puVar1 = PTR_s__BUSY__0090d32c;
    }
    FUN_0083d010((undefined1 *)(param_1 + 0x2c),puVar1);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}

