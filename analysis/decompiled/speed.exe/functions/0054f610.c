/* speed.exe 0054f610 FUN_0054f610; analysis pseudocode, not buildable source.
 * calls 005438c0 FUN_005438c0
 * calls 0064c9a0 FUN_0064c9a0
 * calls 00660200 FUN_00660200
 * calls 00517e90 FUN_00517e90
 * calls 00460ca0 FUN_00460ca0
 */

void FUN_0054f610(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064c9a0();
  if (iVar1 != 0) {
    FUN_00660200(10,8,9);
  }
  FUN_00517e90(param_1);
  if (*(char *)(DAT_0091cb20 + 0x1d) != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x1c) = 1;
    return;
  }
  if (*(char *)(DAT_0091cb20 + 0x22) != '\0') {
    *(undefined1 *)(DAT_0091cb20 + 0x21) = 1;
    return;
  }
  if (*(int *)(DAT_0091cb20 + 0xbc) == 0) {
    FUN_005438c0(*param_1,&DAT_00890978,param_1[3],-(param_1[1] != 0) & 2);
    *(int *)(DAT_0091cb20 + 0x4c) = *(int *)(DAT_0091cb20 + 0x4c) + 1;
    return;
  }
  if (param_1[1] == 0) {
    FUN_00460ca0(*(int *)(DAT_0091cb20 + 0x4c) * 0x10 + *(int *)(DAT_0091cb20 + 0x44),*param_1,0x10)
    ;
    *(int *)(DAT_0091cb20 + 0x4c) = *(int *)(DAT_0091cb20 + 0x4c) + 1;
  }
  return;
}

