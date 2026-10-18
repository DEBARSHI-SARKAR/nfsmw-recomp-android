/* speed.exe 005e96d0 FUN_005e96d0; analysis pseudocode, not buildable source.
 * calls 005d51f0 FUN_005d51f0
 * calls 005d59f0 FUN_005d59f0
 */

void __fastcall FUN_005e96d0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  if (*param_1 != 0) {
    iVar1 = FUN_005d51f0(DAT_0092feb4,DAT_0092feb4 + DAT_0092febc * 8,*param_1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 4) != 0)) {
      piVar2 = (int *)FUN_005d59f0(&LAB_00403850);
      if (piVar2 != (int *)0x0) {
        local_14 = param_1[0x60];
        local_10 = param_1[0x61];
        local_c = param_1[0x62];
        local_8 = param_1[0x5f];
        local_18 = param_1[99];
        local_24 = param_1[0x5c];
        local_20 = param_1[0x5d];
        local_1c = param_1[0x5e];
        local_4 = 1;
        (**(code **)(*piVar2 + 4))(&local_24);
      }
    }
  }
  return;
}

