import os
from glob import glob
from setuptools import setup, find_packages

package_name = 'legs'

setup(
    name=package_name,
    version='0.0.1',
    packages=find_packages(exclude=[]),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name),
         glob('launch/*launch.[pxy][yma]*'))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Kyle Gibson',
    maintainer_email='kylegibson15@gmail.com',
    description='legs action server pkg',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'legs_server = legs.legs_action_server:main',
            'legs_client = legs.legs_action_client:main'
        ],
    },
)
