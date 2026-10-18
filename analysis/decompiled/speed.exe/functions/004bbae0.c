/* speed.exe 004bbae0 FUN_004bbae0; analysis pseudocode, not buildable source.
 * calls 004b0320 FUN_004b0320
 */

void __thiscall FUN_004bbae0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  switch(*(undefined4 *)(param_1 + 0x38)) {
  case 1:
  case 4:
  case 5:
  case 6:
    FUN_004b0320(param_2);
    return;
  case 2:
  case 3:
  case 7:
    fVar1 = (float10)(**(code **)(**(int **)(*(int *)(param_1 + 0x28) + 0x30) + 0x34))();
    *(float *)(param_1 + 0x78) = (float)fVar1;
    FUN_004b0320(param_2);
    if (*(char *)(param_1 + 0x84) != '\0') {
      *(float *)(param_1 + 0x80) = (float)fVar1;
    }
  }
  return;
}

