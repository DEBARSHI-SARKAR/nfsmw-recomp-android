/* speed.exe 0085d140 FUN_0085d140; analysis pseudocode, not buildable source.
 * calls 00867210 __strlwr
 * calls 0083fe30 FUN_0083fe30
 * calls 008461b0 FUN_008461b0
 * calls 0078af30 FUN_0078af30
 */

undefined4 *
FUN_0085d140(undefined4 param_1,undefined4 param_2,int param_3,undefined *param_4,undefined4 param_5
            )

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = param_3 * 0xb0 + 0x248;
  puVar1 = (undefined4 *)FUN_0078af30(uVar4);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1;
    for (uVar4 = uVar4 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined1 *)puVar2 = 0;
      puVar2 = (undefined4 *)((int)puVar2 + 1);
    }
    FUN_008461b0(puVar1 + 2,param_1,0x20);
    puVar1[10] = param_2;
    puVar1[0x65] = param_3;
    if (param_4 == (undefined *)0x0) {
      param_4 = &DAT_0085c200;
    }
    *puVar1 = param_4;
    puVar1[1] = param_5;
    __strlwr((char *)(puVar1 + 2));
    puVar1[0x37] = 15000;
    puVar1[0x38] = 15000;
    puVar1[0x5d] = 1;
    puVar1[0x60] = 1;
    puVar1[0xb] = 3;
    puVar1[0xc] = 0x400;
    FUN_008461b0(puVar1 + 0xf,"demangler.ea.com",0x30);
    FUN_0083fe30(FUN_0085d110,puVar1);
    puVar2 = puVar1;
  }
  return puVar2;
}

