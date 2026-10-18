/* speed.exe 0057f4d0 FUN_0057f4d0; analysis pseudocode, not buildable source.
 * calls 00573140 FUN_00573140
 * calls 0056bb80 FUN_0056bb80
 */

void __fastcall FUN_0057f4d0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0x10;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[3] = 0;
  uVar2 = 0;
  puVar3 = (undefined1 *)((int)param_1 + 0x12);
  do {
    *puVar3 = (char)uVar2;
    FUN_00573140("SMS_MESSAGE_%d",uVar2 & 0xff);
    iVar1 = FUN_0056bb80();
    if (iVar1 == 0) {
      *puVar3 = 0xff;
    }
    puVar3[1] = 0;
    uVar2 = uVar2 + 1;
    puVar3 = puVar3 + 4;
  } while ((int)uVar2 < 0x96);
  *(undefined2 *)((int)param_1 + 0x26a) = 0;
  return;
}

