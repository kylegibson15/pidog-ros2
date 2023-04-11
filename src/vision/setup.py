from setuptools import setup

package_name = 'vision'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Kyle Gibson',
    maintainer_email='kylegibson15@gmail.com',
    description='package for managing the pi camera',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'vision = vision.vision_node:main'
        ],
    },
)
