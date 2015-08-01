#-*-coding:utf8-*-
# http://www.lihuai.net/program/python/1698.html

from oslo.config import cfg
import os

neutron_opts = [
    cfg.StrOpt('admin_username',
               default="neutron-username",
               help="this is neutron admin user_name"),
    cfg.StrOpt('admin_password',
               default="neutron-password",
               help="this is neutron admin password"),
]
neutron_group = cfg.OptGroup(name="neutron", title="nova-neutron",
                             help="neutron config in nova.conf")

if __name__ == "__main__":

    CONF = cfg.CONF
    CONF.register_group(neutron_group)
    CONF.register_opts(neutron_opts, neutron_group)
    CONF(default_config_files=["/etc/nova/nova.conf", ])
    print(CONF.neutron.admin_username)
    print(CONF.neutron.admin_password)
    print(os.getcwd())