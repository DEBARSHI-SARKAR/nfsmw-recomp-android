/* speed.exe 00446260 FUN_00446260; analysis pseudocode, not buildable source.
 * calls 004461d0 FUN_004461d0
 */

void __thiscall FUN_00446260(uint *param_1,uint param_2,undefined1 *param_3)

{
  uint uVar1;
  uint *puVar2;
  
  *param_3 = 0;
  uVar1 = 0;
  if (*param_1 != 0) {
    puVar2 = param_1 + 1;
    while (param_2 != *puVar2) {
      uVar1 = uVar1 + 1;
      puVar2 = puVar2 + 2;
      if (*param_1 <= uVar1) {
        return;
      }
    }
    FUN_004461d0(uVar1,param_3);
  }
  return;
}

