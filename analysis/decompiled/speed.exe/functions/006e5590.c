/* speed.exe 006e5590 FUN_006e5590; analysis pseudocode, not buildable source.
 * calls 007e7d5e D3DXMatrixMultiply
 * calls 006e43f0 FUN_006e43f0
 * calls 004fb8f0 FUN_004fb8f0
 * calls 006be800 FUN_006be800
 */

void FUN_006e5590(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puStack_9c;
  undefined1 *puStack_98;
  undefined1 *puStack_94;
  undefined1 local_90 [4];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_80 [12];
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 *puStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [12];
  undefined1 local_50 [76];
  
  puStack_94 = local_90;
  if (DAT_00982d0c != '\0') {
    puStack_98 = local_80;
    puStack_9c = (undefined1 *)0x6e55b6;
    FUN_004fb8f0();
    puStack_94 = (undefined1 *)DAT_00919650;
    puStack_98 = (undefined1 *)param_2;
    puStack_9c = local_50;
    D3DXMatrixMultiply();
    FUN_006be800(auStack_5c,&uStack_8c,&puStack_9c);
    puStack_68 = puStack_9c;
    uStack_60 = puStack_94;
    uStack_74 = uStack_8c;
    uStack_64 = puStack_98;
    uStack_6c = uStack_84;
    uStack_70 = uStack_88;
    FUN_006e43f0(&uStack_74);
  }
  return;
}

