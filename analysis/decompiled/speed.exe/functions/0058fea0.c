/* speed.exe 0058fea0 FUN_0058fea0; analysis pseudocode, not buildable source.
 * calls 0057fb50 FUN_0057fb50
 */

void __fastcall FUN_0058fea0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int local_4;
  
  uVar1 = FUN_0057fb50();
  puVar2 = (undefined1 *)(param_1 + 0x24);
  local_4 = 0xb;
  do {
    puVar2[-1] = 3;
    *puVar2 = 1;
    puVar2[1] = 1;
    puVar2[2] = 1;
    puVar2[3] = 1;
    puVar2[4] = 0;
    puVar2[-3] = 0;
    puVar2[-4] = 2;
    puVar2[-2] = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 8) = uVar1;
    puVar2[5] = 3;
    *(undefined4 *)(puVar2 + 0xc) = uVar1;
    puVar2 = puVar2 + 0x18;
    local_4 = local_4 + -1;
  } while (local_4 != 0);
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined1 *)(param_1 + 0x50) = 1;
  *(undefined1 *)(param_1 + 0x98) = 1;
  *(undefined1 *)(param_1 + 0x80) = 1;
  *(undefined1 *)(param_1 + 0x68) = *(undefined1 *)(param_1 + 0x6b);
  *(undefined1 *)(param_1 + 0x83) = 0;
  return;
}

