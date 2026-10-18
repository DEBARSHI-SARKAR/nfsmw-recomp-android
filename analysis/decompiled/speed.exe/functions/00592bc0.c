/* speed.exe 00592bc0 FUN_00592bc0; analysis pseudocode, not buildable source.
 * calls 00652ad0 _malloc
 * calls 00515b90 FUN_00515b90
 */

void __fastcall FUN_00592bc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int local_4;
  
  local_4 = 0;
  if (0 < param_1[0x30] / 2) {
    do {
      puVar1 = _malloc(0x4c);
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1[3] = 0x43b6310f;
        puVar1[4] = 0;
        puVar1[5] = 0;
        puVar1[6] = 0;
        *(undefined1 *)(puVar1 + 8) = 0;
        *(undefined1 *)((int)puVar1 + 0x21) = 1;
        puVar1[0xb] = 0;
        puVar1[0xc] = 0;
        puVar1[0xd] = 0x3f800000;
        puVar1[0xe] = 0x3f800000;
        puVar1[0xf] = 0x3f800000;
        puVar1[0x10] = 0x3f800000;
        *(undefined1 *)(puVar1 + 0x11) = 1;
        *(undefined1 *)((int)puVar1 + 0x45) = 0;
        *(undefined1 *)((int)puVar1 + 0x46) = 0;
        puVar1[0x12] = 0;
        *puVar1 = &PTR_FUN_008a1590;
      }
      iVar2 = (**(code **)(*param_1 + 8))(puVar1);
      if (iVar2 != 0) {
        FUN_00515b90(iVar2,puVar1[3]);
      }
      local_4 = local_4 + 1;
    } while (local_4 < param_1[0x30] / 2);
  }
  if (param_1[2] == 0) {
    param_1[0xb] = 0;
    return;
  }
  param_1[0xb] = param_1[2] + -4;
  return;
}

