/* speed.exe 0057a280 FUN_0057a280; analysis pseudocode, not buildable source.
 * calls 00514c70 FUN_00514c70
 * calls 00514e20 FUN_00514e20
 * calls 005675d0 FUN_005675d0
 * calls 00514cc0 FUN_00514cc0
 */

void __fastcall FUN_0057a280(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_8;
  undefined4 local_4;
  
  for (puVar1 = *(undefined4 **)(param_1 + 0x30); puVar1 != (undefined4 *)(param_1 + 0x30);
      puVar1 = (undefined4 *)*puVar1) {
    if (*(char *)(puVar1 + 6) == '\0') {
      FUN_00514cc0(puVar1[2]);
      local_8 = 0;
      local_4 = 0x3f800000;
      FUN_005675d0(puVar1 + 3,&local_8,puVar1[2],0);
      FUN_00514e20(puVar1[2],0);
    }
    else {
      FUN_00514c70(puVar1[2]);
    }
  }
  return;
}

