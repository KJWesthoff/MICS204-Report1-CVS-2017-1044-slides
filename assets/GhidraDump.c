
undefined4 FUN_0002f565(int *param_1,uint **param_2,uint *param_3,short *param_4)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int *piVar5;
  byte bVar6;
  uint uVar7;
  undefined4 uVar8;
  uint *puVar9;
  int *local_8;
  
  local_8 = (int *)0x0;
  uVar7 = FUN_0002f4a8(param_1);
  *param_3 = uVar7;
  if (uVar7 == 0) {
    *param_4 = 0;
    uVar8 = 0xc098f0ff;
  }
  else {
    puVar9 = FUN_00011aee(uVar7,0x15);
    *param_2 = puVar9;
    if (puVar9 == (uint *)0x0) {
      if (((1 < (byte)PTR_LOOP_00020000[0x1d]) && ((PTR_LOOP_00020000[0x20] & 1) != 0)) &&
         (bVar6 = KeGetCurrentIrql(), bVar6 < 2)) {
        DbgPrint("SrvOs2FeaListToNt: Unable to allocate %d bytes from nonpaged pool.",*param_3,0);
        DbgPrint(&DAT_000228b2);
      }
      uVar8 = 0xc0000205;
    }
    else {
      iVar1 = *param_1;
      piVar5 = param_1 + 1;
      puVar4 = puVar9;
      while (puVar3 = puVar9, piVar2 = piVar5, piVar2 <= (int *)(iVar1 + -5 + (int)param_1)) {
        if ((*(byte *)piVar2 & 0x7f) != 0) {
          *param_4 = (short)piVar2 - (short)param_1;
          uVar8 = 0xc000000d;
          goto LAB_0002f63f;
        }
        puVar9 = (uint *)FUN_0002f22b((int *)puVar3,(undefined *)piVar2);
        puVar4 = puVar3;
        local_8 = piVar2;
        piVar5 = (int *)((int)piVar2 +
                        (uint)*(ushort *)((int)piVar2 + 2) + *(byte *)((int)piVar2 + 1) + 5);
      }
      if (piVar2 == (int *)(*param_1 + (int)param_1)) {
        *puVar4 = 0;
        uVar8 = 0;
      }
      else {
        *param_4 = (short)local_8 - (short)param_1;
        uVar8 = 0xc0000001;
LAB_0002f63f:
        FUN_00011a98((int)*param_2);
      }
    }
  }
  return uVar8;
}

